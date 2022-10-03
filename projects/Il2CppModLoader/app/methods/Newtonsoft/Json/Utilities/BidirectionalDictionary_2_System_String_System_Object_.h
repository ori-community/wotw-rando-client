#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Utilities::BidirectionalDictionary_2_System_String_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x01D0A250, bool, TryGetByFirst, (app::BidirectionalDictionary_2_System_String_System_Object_ * this_ptr, app::String* first, app::Object** second))
    IL2CPP_REGISTER_METHODINFO(0x04739210, BidirectionalDictionary_2_System_String_System_Object__TryGetByFirst__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D0A2D0, bool, TryGetBySecond, (app::BidirectionalDictionary_2_System_String_System_Object_ * this_ptr, app::Object* second, app::String** first))
    IL2CPP_REGISTER_METHODINFO(0x047309D8, BidirectionalDictionary_2_System_String_System_Object__TryGetBySecond__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D09E70, void, Set, (app::BidirectionalDictionary_2_System_String_System_Object_ * this_ptr, app::String* first, app::Object* second))
    IL2CPP_REGISTER_METHODINFO(0x0473E7A0, BidirectionalDictionary_2_System_String_System_Object__Set__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D09C20, void, ctor, (app::BidirectionalDictionary_2_System_String_System_Object_ * this_ptr, app::IEqualityComparer_1_System_String_* first_equality_comparer, app::IEqualityComparer_1_System_Object_* second_equality_comparer, app::String* duplicate_first_error_message, app::String* duplicate_second_error_message))
    IL2CPP_REGISTER_METHODINFO(0x047572D0, BidirectionalDictionary_2_System_String_System_Object___ctor__MethodInfo)
} // namespace app::classes::Newtonsoft::Json::Utilities::BidirectionalDictionary_2_System_String_System_Object_
