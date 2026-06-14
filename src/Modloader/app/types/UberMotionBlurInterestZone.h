#pragma once
#include <Modloader/app/structs/UberMotionBlurInterestZone.h>
#include <Modloader/app/structs/UberMotionBlurInterestZone__Array.h>
#include <Modloader/app/structs/UberMotionBlurInterestZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberMotionBlurInterestZone {
        inline app::UberMotionBlurInterestZone__Class** type_info() {
            static app::UberMotionBlurInterestZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberMotionBlurInterestZone__Class**)(modloader::win::memory::resolve_rva(0x04751CF8));
            }
            return cache;
        }
        inline app::UberMotionBlurInterestZone__Class* get_class() {
            return il2cpp::get_class<app::UberMotionBlurInterestZone__Class>(type_info(), "", "UberMotionBlurInterestZone");
        }
        inline app::UberMotionBlurInterestZone* create() {
            return il2cpp::create_object<app::UberMotionBlurInterestZone>(get_class());
        }
        inline app::UberMotionBlurInterestZone__Array* create_array(int size) {
            return il2cpp::array_new<app::UberMotionBlurInterestZone__Array>(get_class(), size);
        }
        inline app::UberMotionBlurInterestZone__Array* create_array(const std::vector<app::UberMotionBlurInterestZone*>& items) {
            return il2cpp::array_new<app::UberMotionBlurInterestZone__Array>(get_class(), items);
        }
    } // namespace UberMotionBlurInterestZone
} // namespace app::classes::types
