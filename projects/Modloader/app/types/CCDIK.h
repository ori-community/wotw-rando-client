#pragma once
#include <Modloader/app/structs/CCDIK.h>
#include <Modloader/app/structs/CCDIK__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCDIK {
        inline app::CCDIK__Class** type_info() {
            static app::CCDIK__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CCDIK__Class**)(modloader::win::memory::resolve_rva(0x047332E8));
            }
            return cache;
        }
        inline app::CCDIK__Class* get_class() {
            return il2cpp::get_class<app::CCDIK__Class>(type_info(), "RootMotion.FinalIK", "CCDIK");
        }
        inline app::CCDIK* create() {
            return il2cpp::create_object<app::CCDIK>(get_class());
        }
    } // namespace CCDIK
} // namespace app::classes::types
