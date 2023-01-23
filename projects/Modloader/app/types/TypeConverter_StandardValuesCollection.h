#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TypeConverter_StandardValuesCollection__Class.h>
#include <Modloader/app/structs/TypeConverter_StandardValuesCollection.h>

namespace app::classes::types {
    namespace TypeConverter_StandardValuesCollection {
        inline app::TypeConverter_StandardValuesCollection__Class** type_info = (app::TypeConverter_StandardValuesCollection__Class**)(modloader::win::memory::resolve_rva(0x04764220));
        inline app::TypeConverter_StandardValuesCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeConverter_StandardValuesCollection__Class>(type_info, "System.ComponentModel", "TypeConverter", "StandardValuesCollection");
        }
        inline app::TypeConverter_StandardValuesCollection* create() {
            return il2cpp::create_object<app::TypeConverter_StandardValuesCollection>(get_class());
        }
    } // namespace TypeConverter_StandardValuesCollection
} // namespace app::classes::types
