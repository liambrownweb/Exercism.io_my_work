fun name (input: string option) = let
     val name = if (isSome input) then valOf input else "you"
   in
     "One for " ^ name ^ ", one for me."
end
