#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberBloomAnimator__Class.h>
#include <Modloader/app/structs/UberBloomAnimator.h>
#include <Modloader/app/structs/UberBloomAnimator__Array.h>

namespace app::classes::types {
    namespace UberBloomAnimator {
        inline app::UberBloomAnimator__Class** type_info = (app::UberBloomAnimator__Class**)(modloader::win::memory::resolve_rva(0x0476CFC8));
        inline app::UberBloomAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberBloomAnimator__Class>(type_info, "", "UberBloomAnimator");
        }
        inline app::UberBloomAnimator* create() {
            return il2cpp::create_object<app::UberBloomAnimator>(get_class());
        }
        inline app::UberBloomAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::UberBloomAnimator__Array>(get_class(), size);
        }
        inline app::UberBloomAnimator__Array* create_array(const std::vector<app::UberBloomAnimator*>& items) {
            return il2cpp::array_new<app::UberBloomAnimator__Array>(get_class(), items);
        }
    } // namespace UberBloomAnimator
} // namespace app::classes::types
