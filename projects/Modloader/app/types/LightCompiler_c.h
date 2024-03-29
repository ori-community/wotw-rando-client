#pragma once
#include <Modloader/app/structs/LightCompiler_c.h>
#include <Modloader/app/structs/LightCompiler_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCompiler_c {
        inline app::LightCompiler_c__Class** type_info() {
            static app::LightCompiler_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightCompiler_c__Class**)(modloader::win::memory::resolve_rva(0x047424D8));
            }
            return cache;
        }
        inline app::LightCompiler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCompiler_c__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LightCompiler", "<>c");
        }
        inline app::LightCompiler_c* create() {
            return il2cpp::create_object<app::LightCompiler_c>(get_class());
        }
    } // namespace LightCompiler_c
} // namespace app::classes::types
