#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BidirectionalDictionary_2_System_Object_System_Object__1.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Object_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Newtonsoft::Json::Utilities::BidirectionalDictionary_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x01D09C20, void, ctor, (app::BidirectionalDictionary_2_System_Object_System_Object__1 * this_ptr, app::IEqualityComparer_1_System_Object_* first_equality_comparer, app::IEqualityComparer_1_System_Object_* second_equality_comparer, app::String* duplicate_first_error_message, app::String* duplicate_second_error_message))
    IL2CPP_REGISTER_METHOD(0x01D09E70, void, Set, (app::BidirectionalDictionary_2_System_Object_System_Object__1 * this_ptr, app::Object* first, app::Object* second))
    IL2CPP_REGISTER_METHODINFO(0x04748A20, BidirectionalDictionary_2_System_Object_System_Object__1_Set__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D0A250, bool, TryGetByFirst, (app::BidirectionalDictionary_2_System_Object_System_Object__1 * this_ptr, app::Object* first, app::Object** second))
    IL2CPP_REGISTER_METHOD(0x01D0A2D0, bool, TryGetBySecond, (app::BidirectionalDictionary_2_System_Object_System_Object__1 * this_ptr, app::Object* second, app::Object** first))
} // namespace app::classes::Newtonsoft::Json::Utilities::BidirectionalDictionary_2_System_Object_System_Object_
