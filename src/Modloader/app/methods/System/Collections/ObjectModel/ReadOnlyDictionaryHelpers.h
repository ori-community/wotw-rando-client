#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ICollection_1_System_Object_.h>

namespace app::classes::System::Collections::ObjectModel::ReadOnlyDictionaryHelpers {
    IL2CPP_REGISTER_METHOD(0x01AEB7E0, void, CopyToNonGenericICollectionHelper, app::ICollection_1_System_Object_* collection, app::Array* array, int32_t index)
}
