#pragma once
#include <Modloader/app/structs/ShaderKeyword_UberPostProcess.h>
#include <Modloader/app/structs/ShaderKeyword_UberPostProcess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderKeyword_UberPostProcess {
        inline app::ShaderKeyword_UberPostProcess__Class** type_info() {
            static app::ShaderKeyword_UberPostProcess__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderKeyword_UberPostProcess__Class**)(modloader::win::memory::resolve_rva(0x0478DB30));
            }
            return cache;
        }
        inline app::ShaderKeyword_UberPostProcess__Class* get_class() {
            return il2cpp::get_class<app::ShaderKeyword_UberPostProcess__Class>(type_info(), "", "ShaderKeyword_UberPostProcess");
        }
        inline app::ShaderKeyword_UberPostProcess* create() {
            return il2cpp::create_object<app::ShaderKeyword_UberPostProcess>(get_class());
        }
    } // namespace ShaderKeyword_UberPostProcess
} // namespace app::classes::types
