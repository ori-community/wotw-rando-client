#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OnRemoveWriter__Class.h>
#include <Modloader/app/structs/OnRemoveWriter.h>

namespace app::classes::types {
    namespace OnRemoveWriter {
        namespace {
            inline app::OnRemoveWriter__Class* type_info_ref = nullptr;
        }
        inline app::OnRemoveWriter__Class** type_info = &type_info_ref;
        inline app::OnRemoveWriter__Class* get_class() {
            return il2cpp::get_class<app::OnRemoveWriter__Class>(type_info, "System.Xml", "OnRemoveWriter");
        }
        inline app::OnRemoveWriter* create() {
            return il2cpp::create_object<app::OnRemoveWriter>(get_class());
        }
    } // namespace OnRemoveWriter
} // namespace app::classes::types
