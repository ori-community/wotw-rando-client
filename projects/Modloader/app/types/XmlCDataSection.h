#pragma once
#include <Modloader/app/structs/XmlCDataSection.h>
#include <Modloader/app/structs/XmlCDataSection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlCDataSection {
        inline app::XmlCDataSection__Class** type_info() {
            static app::XmlCDataSection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlCDataSection__Class**)(modloader::win::memory::resolve_rva(0x047116A8));
            }
            return cache;
        }
        inline app::XmlCDataSection__Class* get_class() {
            return il2cpp::get_class<app::XmlCDataSection__Class>(type_info(), "System.Xml", "XmlCDataSection");
        }
        inline app::XmlCDataSection* create() {
            return il2cpp::create_object<app::XmlCDataSection>(get_class());
        }
    } // namespace XmlCDataSection
} // namespace app::classes::types
