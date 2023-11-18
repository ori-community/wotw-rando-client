#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EmptyEnumerator.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Xml::EmptyEnumerator {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IEnumerator_MoveNext, (app::EmptyEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IEnumerator_Reset, (app::EmptyEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021F8150, app::Object*, IEnumerator_get_Current, (app::EmptyEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EmptyEnumerator * this_ptr))
} // namespace app::classes::System::Xml::EmptyEnumerator
