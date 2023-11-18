#pragma once
#include <Modloader/app/structs/ValidationEventArgs.h>
#include <Modloader/app/structs/ValidationEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValidationEventArgs {
        inline app::ValidationEventArgs__Class** type_info() {
            static app::ValidationEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ValidationEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0473F968));
            }
            return cache;
        }
        inline app::ValidationEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ValidationEventArgs__Class>(type_info(), "System.Xml.Schema", "ValidationEventArgs");
        }
        inline app::ValidationEventArgs* create() {
            return il2cpp::create_object<app::ValidationEventArgs>(get_class());
        }
    } // namespace ValidationEventArgs
} // namespace app::classes::types
