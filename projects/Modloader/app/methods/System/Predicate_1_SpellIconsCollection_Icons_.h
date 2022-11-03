#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Predicate_1_SpellIconsCollection_Icons_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_SpellIconsCollection_Icons_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02882470, bool, Invoke, (app::Predicate_1_SpellIconsCollection_Icons_ * this_ptr, app::SpellIconsCollection_Icons obj))
    IL2CPP_REGISTER_METHOD(0x02A50400, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_SpellIconsCollection_Icons_ * this_ptr, app::SpellIconsCollection_Icons obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_SpellIconsCollection_Icons_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_SpellIconsCollection_Icons_
