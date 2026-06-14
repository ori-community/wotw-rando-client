#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NameObjectCollectionBase.h>
#include <Modloader/app/structs/NameObjectCollectionBase_NameObjectKeysEnumerator.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator {
    IL2CPP_REGISTER_METHOD(0x02499460, void, ctor, app::NameObjectCollectionBase_NameObjectKeysEnumerator* this_ptr, app::NameObjectCollectionBase* coll)
    IL2CPP_REGISTER_METHOD(0x02499490, bool, MoveNext, app::NameObjectCollectionBase_NameObjectKeysEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024995C0, void, Reset, app::NameObjectCollectionBase_NameObjectKeysEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024996A0, app::Object*, get_Current, app::NameObjectCollectionBase_NameObjectKeysEnumerator* this_ptr)
} // namespace app::classes::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator
