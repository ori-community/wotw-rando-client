#pragma once
#include <Modloader/app/structs/DataObjectMethodAttribute.h>
#include <Modloader/app/structs/DataObjectMethodAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataObjectMethodAttribute {
        inline app::DataObjectMethodAttribute__Class** type_info() {
            static app::DataObjectMethodAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataObjectMethodAttribute__Class**)(modloader::win::memory::resolve_rva(0x047086B0));
            }
            return cache;
        }
        inline app::DataObjectMethodAttribute__Class* get_class() {
            return il2cpp::get_class<app::DataObjectMethodAttribute__Class>(type_info(), "System.ComponentModel", "DataObjectMethodAttribute");
        }
        inline app::DataObjectMethodAttribute* create() {
            return il2cpp::create_object<app::DataObjectMethodAttribute>(get_class());
        }
    } // namespace DataObjectMethodAttribute
} // namespace app::classes::types
