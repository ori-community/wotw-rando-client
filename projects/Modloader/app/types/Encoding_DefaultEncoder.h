#pragma once
#include <Modloader/app/structs/Encoding_DefaultEncoder.h>
#include <Modloader/app/structs/Encoding_DefaultEncoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Encoding_DefaultEncoder {
        inline app::Encoding_DefaultEncoder__Class** type_info() {
            static app::Encoding_DefaultEncoder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Encoding_DefaultEncoder__Class**)(modloader::win::memory::resolve_rva(0x04735CB0));
            }
            return cache;
        }
        inline app::Encoding_DefaultEncoder__Class* get_class() {
            return il2cpp::get_nested_class<app::Encoding_DefaultEncoder__Class>(type_info(), "System.Text", "Encoding", "DefaultEncoder");
        }
        inline app::Encoding_DefaultEncoder* create() {
            return il2cpp::create_object<app::Encoding_DefaultEncoder>(get_class());
        }
    } // namespace Encoding_DefaultEncoder
} // namespace app::classes::types
