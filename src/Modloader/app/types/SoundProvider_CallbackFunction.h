#pragma once
#include <Modloader/app/structs/SoundProvider_CallbackFunction.h>
#include <Modloader/app/structs/SoundProvider_CallbackFunction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundProvider_CallbackFunction {
        inline app::SoundProvider_CallbackFunction__Class** type_info() {
            static app::SoundProvider_CallbackFunction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoundProvider_CallbackFunction__Class**)(modloader::win::memory::resolve_rva(0x0470E280));
            }
            return cache;
        }
        inline app::SoundProvider_CallbackFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundProvider_CallbackFunction__Class>(type_info(), "", "SoundProvider", "CallbackFunction");
        }
        inline app::SoundProvider_CallbackFunction* create() {
            return il2cpp::create_object<app::SoundProvider_CallbackFunction>(get_class());
        }
    } // namespace SoundProvider_CallbackFunction
} // namespace app::classes::types
