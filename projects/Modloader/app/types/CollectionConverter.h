#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CollectionConverter__Class.h>
#include <Modloader/app/structs/CollectionConverter.h>

namespace app::classes::types {
    namespace CollectionConverter {
        namespace {
            inline app::CollectionConverter__Class* type_info_ref = nullptr;
        }
        inline app::CollectionConverter__Class** type_info = &type_info_ref;
        inline app::CollectionConverter__Class* get_class() {
            return il2cpp::get_class<app::CollectionConverter__Class>(type_info, "System.ComponentModel", "CollectionConverter");
        }
        inline app::CollectionConverter* create() {
            return il2cpp::create_object<app::CollectionConverter>(get_class());
        }
    } // namespace CollectionConverter
} // namespace app::classes::types
