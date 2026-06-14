#pragma once
#include <Modloader/app/structs/UberShaderBlock.h>
#include <Modloader/app/structs/UberShaderBlock__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderBlock {
        inline app::UberShaderBlock__Class** type_info() {
            static app::UberShaderBlock__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderBlock__Class**)(modloader::win::memory::resolve_rva(0x0477CD60));
            }
            return cache;
        }
        inline app::UberShaderBlock__Class* get_class() {
            return il2cpp::get_class<app::UberShaderBlock__Class>(type_info(), "", "UberShaderBlock");
        }
        inline app::UberShaderBlock* create() {
            return il2cpp::create_object<app::UberShaderBlock>(get_class());
        }
    } // namespace UberShaderBlock
} // namespace app::classes::types
