What is ConvertForCPP?

  -Convert is a class in C# that converts a data type to another. ConvertForCPP is my version of Convert ported over to C++.


Important notes:

  -Convert is a static class. In C#, an example of Convert being called would be Convert.ToInt32 but in C++, it is Convert::ToInt32.  

  -ToInt and ToInt32 are the same. Both are present for convenience.

  -ToSingle and ToFloat are the same. Both are present for convenience.

  -All the DateTime and ToDateTime portions are removed since they always call "InvalidCastException".

  -All the Decimal and ToDecimal  portions are removed since I personally did not see a use for it.

  -ChangeType does not exist since C++ does not inherit from an Object class.
