#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Dynamic::Utils::ListProvider_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02879B70, app::Object*, get_Item, (app::ListProvider_1_System_Object_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02879BC0, void, set_Item, (app::ListProvider_1_System_Object_ * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x0473D8B8, ListProvider_1_System_Object__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02879E80, int32_t, get_Count, (app::ListProvider_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::ListProvider_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02879A30, int32_t, IndexOf, (app::ListProvider_1_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02879AF0, void, Insert, (app::ListProvider_1_System_Object_ * this_ptr, int32_t index, app::Object* item))
    IL2CPP_REGISTER_METHODINFO(0x0474FD00, ListProvider_1_System_Object__Insert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02879B30, void, RemoveAt, (app::ListProvider_1_System_Object_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0471FAA0, ListProvider_1_System_Object__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02879C00, void, Add, (app::ListProvider_1_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHODINFO(0x0476FBB0, ListProvider_1_System_Object__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02879C40, void, Clear, (app::ListProvider_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04750778, ListProvider_1_System_Object__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02879C80, bool, Contains, (app::ListProvider_1_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02879CB0, void, CopyTo, (app::ListProvider_1_System_Object_ * this_ptr, app::Object__Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0472DD20, ListProvider_1_System_Object__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02879EB0, bool, Remove, (app::ListProvider_1_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHODINFO(0x04748AD0, ListProvider_1_System_Object__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02879EF0, app::IEnumerator_1_System_Object_*, GetEnumerator, (app::ListProvider_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019DF3A0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::ListProvider_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::ListProvider_1_System_Object_ * this_ptr))
} // namespace app::classes::System::Dynamic::Utils::ListProvider_1_System_Object_
