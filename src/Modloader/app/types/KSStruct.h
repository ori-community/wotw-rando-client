#pragma once
#include <Modloader/app/structs/KSStruct.h>
#include <Modloader/app/structs/KSStruct__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KSStruct {
        inline app::KSStruct__Class** type_info() {
            static app::KSStruct__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KSStruct__Class**)(modloader::win::memory::resolve_rva(0x04767640));
            }
            return cache;
        }
        inline app::KSStruct__Class* get_class() {
            return il2cpp::get_class<app::KSStruct__Class>(type_info(), "System.Xml.Schema", "KSStruct");
        }
        inline app::KSStruct* create() {
            return il2cpp::create_object<app::KSStruct>(get_class());
        }
    } // namespace KSStruct
} // namespace app::classes::types
