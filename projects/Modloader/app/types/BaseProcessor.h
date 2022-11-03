#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaseProcessor {
        namespace {
            inline app::BaseProcessor__Class* type_info_ref = nullptr;
        }
        inline app::BaseProcessor__Class** type_info = &type_info_ref;
        inline app::BaseProcessor__Class* get_class() {
            return il2cpp::get_class<app::BaseProcessor__Class>(type_info, "System.Xml.Schema", "BaseProcessor");
        }
        inline app::BaseProcessor* create() {
            return il2cpp::create_object<app::BaseProcessor>(get_class());
        }
    } // namespace BaseProcessor
} // namespace app::classes::types
