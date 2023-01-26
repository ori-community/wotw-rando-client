#pragma once
#include <Modloader/app/structs/XNamespace.h>
#include <Modloader/app/structs/XNamespace__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XNamespace {
        inline app::XNamespace__Class** type_info() {
            static app::XNamespace__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XNamespace__Class**)(modloader::win::memory::resolve_rva(0x04725360));
            }
            return cache;
        }
        inline app::XNamespace__Class* get_class() {
            return il2cpp::get_class<app::XNamespace__Class>(type_info(), "System.Xml.Linq", "XNamespace");
        }
        inline app::XNamespace* create() {
            return il2cpp::create_object<app::XNamespace>(get_class());
        }
    } // namespace XNamespace
} // namespace app::classes::types
