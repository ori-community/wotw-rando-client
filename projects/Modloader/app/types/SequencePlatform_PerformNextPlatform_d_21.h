#pragma once
#include <Modloader/app/structs/SequencePlatform_PerformNextPlatform_d_21.h>
#include <Modloader/app/structs/SequencePlatform_PerformNextPlatform_d_21__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SequencePlatform_PerformNextPlatform_d_21 {
        inline app::SequencePlatform_PerformNextPlatform_d_21__Class** type_info() {
            static app::SequencePlatform_PerformNextPlatform_d_21__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SequencePlatform_PerformNextPlatform_d_21__Class**)(modloader::win::memory::resolve_rva(0x0470C628));
            }
            return cache;
        }
        inline app::SequencePlatform_PerformNextPlatform_d_21__Class* get_class() {
            return il2cpp::get_nested_class<app::SequencePlatform_PerformNextPlatform_d_21__Class>(type_info(), "", "SequencePlatform", "<PerformNextPlatform>d__21");
        }
        inline app::SequencePlatform_PerformNextPlatform_d_21* create() {
            return il2cpp::create_object<app::SequencePlatform_PerformNextPlatform_d_21>(get_class());
        }
    } // namespace SequencePlatform_PerformNextPlatform_d_21
} // namespace app::classes::types
