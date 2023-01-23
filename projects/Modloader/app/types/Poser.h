#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Poser__Class.h>
#include <Modloader/app/structs/Poser.h>

namespace app::classes::types {
    namespace Poser {
        namespace {
            inline app::Poser__Class* type_info_ref = nullptr;
        }
        inline app::Poser__Class** type_info = &type_info_ref;
        inline app::Poser__Class* get_class() {
            return il2cpp::get_class<app::Poser__Class>(type_info, "RootMotion.FinalIK", "Poser");
        }
        inline app::Poser* create() {
            return il2cpp::create_object<app::Poser>(get_class());
        }
    } // namespace Poser
} // namespace app::classes::types
