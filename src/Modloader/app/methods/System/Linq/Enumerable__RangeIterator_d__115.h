#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enumerable_RangeIterator_d_115.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Int32_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Linq::Enumerable__RangeIterator_d__115 {
    IL2CPP_REGISTER_METHOD(0x01F9B3A0, void, ctor, app::Enumerable_RangeIterator_d_115* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::Enumerable_RangeIterator_d_115* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F9B400, bool, MoveNext, app::Enumerable_RangeIterator_d_115* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, IEnumerator_int__get_Current, app::Enumerable_RangeIterator_d_115* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F9B440, void, IEnumerator_Reset, app::Enumerable_RangeIterator_d_115* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F9B490, app::Object*, IEnumerator_get_Current, app::Enumerable_RangeIterator_d_115* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F9B520, app::IEnumerator_1_System_Int32_*, IEnumerable_int__GetEnumerator, app::Enumerable_RangeIterator_d_115* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F9B710, app::IEnumerator*, IEnumerable_GetEnumerator, app::Enumerable_RangeIterator_d_115* this_ptr)
} // namespace app::classes::System::Linq::Enumerable__RangeIterator_d__115
