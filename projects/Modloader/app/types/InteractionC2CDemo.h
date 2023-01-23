#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InteractionC2CDemo__Class.h>
#include <Modloader/app/structs/InteractionC2CDemo.h>

namespace app::classes::types {
    namespace InteractionC2CDemo {
        namespace {
            inline app::InteractionC2CDemo__Class* type_info_ref = nullptr;
        }
        inline app::InteractionC2CDemo__Class** type_info = &type_info_ref;
        inline app::InteractionC2CDemo__Class* get_class() {
            return il2cpp::get_class<app::InteractionC2CDemo__Class>(type_info, "RootMotion.Demos", "InteractionC2CDemo");
        }
        inline app::InteractionC2CDemo* create() {
            return il2cpp::create_object<app::InteractionC2CDemo>(get_class());
        }
    } // namespace InteractionC2CDemo
} // namespace app::classes::types
