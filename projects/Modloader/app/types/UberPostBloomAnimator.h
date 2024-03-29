#pragma once
#include <Modloader/app/structs/UberPostBloomAnimator.h>
#include <Modloader/app/structs/UberPostBloomAnimator__Array.h>
#include <Modloader/app/structs/UberPostBloomAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPostBloomAnimator {
        inline app::UberPostBloomAnimator__Class** type_info() {
            static app::UberPostBloomAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPostBloomAnimator__Class**)(modloader::win::memory::resolve_rva(0x0470B8F8));
            }
            return cache;
        }
        inline app::UberPostBloomAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberPostBloomAnimator__Class>(type_info(), "", "UberPostBloomAnimator");
        }
        inline app::UberPostBloomAnimator* create() {
            return il2cpp::create_object<app::UberPostBloomAnimator>(get_class());
        }
        inline app::UberPostBloomAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPostBloomAnimator__Array>(get_class(), size);
        }
        inline app::UberPostBloomAnimator__Array* create_array(const std::vector<app::UberPostBloomAnimator*>& items) {
            return il2cpp::array_new<app::UberPostBloomAnimator__Array>(get_class(), items);
        }
    } // namespace UberPostBloomAnimator
} // namespace app::classes::types
