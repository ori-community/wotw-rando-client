#pragma once
#include <Modloader/app/structs/Compiler.h>
#include <Modloader/app/structs/Compiler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Compiler {
        inline app::Compiler__Class** type_info() {
            static app::Compiler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Compiler__Class**)(modloader::win::memory::resolve_rva(0x04783AF8));
            }
            return cache;
        }
        inline app::Compiler__Class* get_class() {
            return il2cpp::get_class<app::Compiler__Class>(type_info(), "System.Xml.Schema", "Compiler");
        }
        inline app::Compiler* create() {
            return il2cpp::create_object<app::Compiler>(get_class());
        }
    } // namespace Compiler
} // namespace app::classes::types
