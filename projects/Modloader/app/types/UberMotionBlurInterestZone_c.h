#pragma once
#include <Modloader/app/structs/UberMotionBlurInterestZone_c.h>
#include <Modloader/app/structs/UberMotionBlurInterestZone_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberMotionBlurInterestZone_c {
        inline app::UberMotionBlurInterestZone_c__Class** type_info() {
            static app::UberMotionBlurInterestZone_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberMotionBlurInterestZone_c__Class**)(modloader::win::memory::resolve_rva(0x0471CB60));
            }
            return cache;
        }
        inline app::UberMotionBlurInterestZone_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UberMotionBlurInterestZone_c__Class>(type_info(), "", "UberMotionBlurInterestZone", "<>c");
        }
        inline app::UberMotionBlurInterestZone_c* create() {
            return il2cpp::create_object<app::UberMotionBlurInterestZone_c>(get_class());
        }
    } // namespace UberMotionBlurInterestZone_c
} // namespace app::classes::types
