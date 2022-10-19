#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberMotionBlurInterestZone_c {
        inline app::UberMotionBlurInterestZone_c__Class** type_info = (app::UberMotionBlurInterestZone_c__Class**)(modloader::win::memory::resolve_rva(0x0471CB60));
        inline app::UberMotionBlurInterestZone_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UberMotionBlurInterestZone_c__Class>(type_info, "", "UberMotionBlurInterestZone", "<>c");
        }
        inline app::UberMotionBlurInterestZone_c* create() {
            return il2cpp::create_object<app::UberMotionBlurInterestZone_c>(get_class());
        }
    } // namespace UberMotionBlurInterestZone_c
} // namespace app::classes::types
