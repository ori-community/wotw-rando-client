#pragma once
#include <Modloader/app/structs/OnRemoveWriter.h>
#include <Modloader/app/structs/OnRemoveWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnRemoveWriter {
        inline app::OnRemoveWriter__Class** type_info() {
            static app::OnRemoveWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnRemoveWriter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnRemoveWriter__Class* get_class() {
            return il2cpp::get_class<app::OnRemoveWriter__Class>(type_info(), "System.Xml", "OnRemoveWriter");
        }
        inline app::OnRemoveWriter* create() {
            return il2cpp::create_object<app::OnRemoveWriter>(get_class());
        }
    } // namespace OnRemoveWriter
} // namespace app::classes::types
