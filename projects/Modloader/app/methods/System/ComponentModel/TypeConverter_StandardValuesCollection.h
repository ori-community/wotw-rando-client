#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TypeConverter_StandardValuesCollection.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ComponentModel::TypeConverter_StandardValuesCollection {
    IL2CPP_REGISTER_METHOD(0x02945F10, void, ctor, (app::TypeConverter_StandardValuesCollection * this_ptr, app::ICollection* values))
    IL2CPP_REGISTER_METHOD(0x02946010, int32_t, get_Count, (app::TypeConverter_StandardValuesCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029460C0, app::Object*, get_Item, (app::TypeConverter_StandardValuesCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x029461F0, void, CopyTo, (app::TypeConverter_StandardValuesCollection * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x029462A0, app::IEnumerator*, GetEnumerator, (app::TypeConverter_StandardValuesCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02946330, int32_t, ICollection_get_Count, (app::TypeConverter_StandardValuesCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::TypeConverter_StandardValuesCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object*, ICollection_get_SyncRoot, (app::TypeConverter_StandardValuesCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029461F0, void, ICollection_CopyTo, (app::TypeConverter_StandardValuesCollection * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02946340, app::IEnumerator*, IEnumerable_GetEnumerator, (app::TypeConverter_StandardValuesCollection * this_ptr))
} // namespace app::classes::System::ComponentModel::TypeConverter_StandardValuesCollection
