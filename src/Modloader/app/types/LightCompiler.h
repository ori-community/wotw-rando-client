#pragma once
#include <Modloader/app/structs/LightCompiler.h>
#include <Modloader/app/structs/LightCompiler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCompiler {
        inline app::LightCompiler__Class** type_info() {
            static app::LightCompiler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightCompiler__Class**)(modloader::win::memory::resolve_rva(0x04778E58));
            }
            return cache;
        }
        inline app::LightCompiler__Class* get_class() {
            return il2cpp::get_class<app::LightCompiler__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LightCompiler");
        }
        inline app::LightCompiler* create() {
            return il2cpp::create_object<app::LightCompiler>(get_class());
        }
    } // namespace LightCompiler
} // namespace app::classes::types
