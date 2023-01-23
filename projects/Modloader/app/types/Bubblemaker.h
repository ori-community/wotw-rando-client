#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Bubblemaker__Class.h>
#include <Modloader/app/structs/Bubblemaker.h>

namespace app::classes::types {
    namespace Bubblemaker {
        namespace {
            inline app::Bubblemaker__Class* type_info_ref = nullptr;
        }
        inline app::Bubblemaker__Class** type_info = &type_info_ref;
        inline app::Bubblemaker__Class* get_class() {
            return il2cpp::get_class<app::Bubblemaker__Class>(type_info, "", "Bubblemaker");
        }
        inline app::Bubblemaker* create() {
            return il2cpp::create_object<app::Bubblemaker>(get_class());
        }
    } // namespace Bubblemaker
} // namespace app::classes::types
