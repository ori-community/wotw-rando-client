#pragma once
#include <Modloader/app/structs/SequencePlatform_PerformVanish_d_23.h>
#include <Modloader/app/structs/SequencePlatform_PerformVanish_d_23__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SequencePlatform_PerformVanish_d_23 {
        inline app::SequencePlatform_PerformVanish_d_23__Class** type_info() {
            static app::SequencePlatform_PerformVanish_d_23__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SequencePlatform_PerformVanish_d_23__Class**)(modloader::win::memory::resolve_rva(0x0473BCC8));
            }
            return cache;
        }
        inline app::SequencePlatform_PerformVanish_d_23__Class* get_class() {
            return il2cpp::get_nested_class<app::SequencePlatform_PerformVanish_d_23__Class>(type_info(), "", "SequencePlatform", "<PerformVanish>d__23");
        }
        inline app::SequencePlatform_PerformVanish_d_23* create() {
            return il2cpp::create_object<app::SequencePlatform_PerformVanish_d_23>(get_class());
        }
    } // namespace SequencePlatform_PerformVanish_d_23
} // namespace app::classes::types
