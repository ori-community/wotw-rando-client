#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/Comparer_1_SimpleGenericPool_1_PoolItem__1.h>
#include <Modloader/app/structs/Comparison_1_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/Comparison_1_SimpleGenericPool_1_PoolItem__1.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_SimpleGenericPool_1_PoolItem_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_SimpleGenericPool_1_PoolItem_*, get_Default_1, )
    IL2CPP_REGISTER_METHOD(0x02826470, app::Comparer_1_SimpleGenericPool_1_PoolItem_*, Create_1, app::Comparison_1_SimpleGenericPool_1_PoolItem_* comparison)
    IL2CPP_REGISTER_METHOD(0x02826670, app::Comparer_1_SimpleGenericPool_1_PoolItem_*, CreateComparer_1, )
    IL2CPP_REGISTER_METHOD(0x02810770, int32_t, IComparer_Compare_1, app::Comparer_1_SimpleGenericPool_1_PoolItem_* this_ptr, app::Object* x, app::Object* y)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor_1, app::Comparer_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_SimpleGenericPool_1_PoolItem__1*, get_Default_2, )
    IL2CPP_REGISTER_METHOD(
        0x02826C40,
        app::Comparer_1_SimpleGenericPool_1_PoolItem__1*,
        Create_2,
        app::Comparison_1_SimpleGenericPool_1_PoolItem__1* comparison
    )
    IL2CPP_REGISTER_METHOD(0x02826E40, app::Comparer_1_SimpleGenericPool_1_PoolItem__1*, CreateComparer_2, )
    IL2CPP_REGISTER_METHOD(0x0280A070, int32_t, IComparer_Compare_2, app::Comparer_1_SimpleGenericPool_1_PoolItem__1* this_ptr, app::Object* x, app::Object* y)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor_2, app::Comparer_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_SimpleGenericPool_1_PoolItem_
