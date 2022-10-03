#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Threading::ThreadLocal_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02A60590, app::Object*, get_Value, (app::ThreadLocal_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A606F0, void, set_Value, (app::ThreadLocal_1_System_Object_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02A61570, int32_t, get_ValuesCountForDebugDisplay, (app::ThreadLocal_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A615C0, bool, get_IsValueCreated, (app::ThreadLocal_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04741640, ThreadLocal_1_System_Object__get_IsValueCreated__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A617A0, app::Object*, get_ValueForDebugDisplay, (app::ThreadLocal_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A618F0, app::List_1_System_Object_*, get_ValuesForDebugDisplay, (app::ThreadLocal_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A5FDF0, void, ctor, (app::ThreadLocal_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A5FF20, void, Initialize, (app::ThreadLocal_1_System_Object_ * this_ptr, app::Func_1_Object_* value_factory, bool track_all_values))
    IL2CPP_REGISTER_METHOD(0x02A60040, void, Finalize, (app::ThreadLocal_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A600F0, void, Dispose_1, (app::ThreadLocal_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A601B0, void, Dispose_2, (app::ThreadLocal_1_System_Object_ * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x02A60540, app::String*, ToString, (app::ThreadLocal_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A60860, app::Object*, GetValueSlow, (app::ThreadLocal_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477D430, ThreadLocal_1_System_Object__GetValueSlow__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A609F0, void, SetValueSlow, (app::ThreadLocal_1_System_Object_ * this_ptr, app::Object* value, app::ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array* slot_array))
    IL2CPP_REGISTER_METHODINFO(0x047131B0, ThreadLocal_1_System_Object__SetValueSlow__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A61000, void, CreateLinkedSlot, (app::ThreadLocal_1_System_Object_ * this_ptr, app::ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array* slot_array, int32_t id, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x0477D438, ThreadLocal_1_System_Object__CreateLinkedSlot__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A613F0, app::List_1_System_Object_*, GetValuesAsList, (app::ThreadLocal_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A61920, void, GrowTable, (app::ThreadLocal_1_System_Object_ * this_ptr, app::ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array** table, int32_t min_length))
    IL2CPP_REGISTER_METHOD(0x02A61BE0, int32_t, GetNewTableSize, (int32_t min_size))
    IL2CPP_REGISTER_METHOD(0x02A61C20, void, cctor, ())
} // namespace app::classes::System::Threading::ThreadLocal_1_System_Object_
