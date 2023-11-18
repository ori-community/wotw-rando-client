#pragma once
#include <Modloader/app/structs/ExceptionProcessor.h>
#include <Modloader/app/structs/ExceptionProcessor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExceptionProcessor {
        inline app::ExceptionProcessor__Class** type_info() {
            static app::ExceptionProcessor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExceptionProcessor__Class**)(modloader::win::memory::resolve_rva(0x04780C48));
            }
            return cache;
        }
        inline app::ExceptionProcessor__Class* get_class() {
            return il2cpp::get_class<app::ExceptionProcessor__Class>(type_info(), "Moon.ExceptionProcessing", "ExceptionProcessor");
        }
        inline app::ExceptionProcessor* create() {
            return il2cpp::create_object<app::ExceptionProcessor>(get_class());
        }
    } // namespace ExceptionProcessor
} // namespace app::classes::types
