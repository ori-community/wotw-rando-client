#pragma once
#include <Modloader/app/structs/ISKipUiBackgroundBlur.h>
#include <Modloader/app/structs/ISKipUiBackgroundBlur__Array.h>
#include <Modloader/app/structs/ISKipUiBackgroundBlur__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISKipUiBackgroundBlur {
        inline app::ISKipUiBackgroundBlur__Class** type_info() {
            static app::ISKipUiBackgroundBlur__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISKipUiBackgroundBlur__Class**)(modloader::win::memory::resolve_rva(0x04793740));
            }
            return cache;
        }
        inline app::ISKipUiBackgroundBlur__Class* get_class() {
            return il2cpp::get_class<app::ISKipUiBackgroundBlur__Class>(type_info(), "", "ISKipUiBackgroundBlur");
        }
        inline app::ISKipUiBackgroundBlur__Array* create_array(int size) {
            return il2cpp::array_new<app::ISKipUiBackgroundBlur__Array>(get_class(), size);
        }
        inline app::ISKipUiBackgroundBlur__Array* create_array(const std::vector<app::ISKipUiBackgroundBlur*>& items) {
            return il2cpp::array_new<app::ISKipUiBackgroundBlur__Array>(get_class(), items);
        }
    } // namespace ISKipUiBackgroundBlur
} // namespace app::classes::types
