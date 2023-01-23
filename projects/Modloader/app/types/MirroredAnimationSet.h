#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MirroredAnimationSet__Class.h>
#include <Modloader/app/structs/MirroredAnimationSet.h>

namespace app::classes::types {
    namespace MirroredAnimationSet {
        namespace {
            inline app::MirroredAnimationSet__Class* type_info_ref = nullptr;
        }
        inline app::MirroredAnimationSet__Class** type_info = &type_info_ref;
        inline app::MirroredAnimationSet__Class* get_class() {
            return il2cpp::get_class<app::MirroredAnimationSet__Class>(type_info, "", "MirroredAnimationSet");
        }
        inline app::MirroredAnimationSet* create() {
            return il2cpp::create_object<app::MirroredAnimationSet>(get_class());
        }
    } // namespace MirroredAnimationSet
} // namespace app::classes::types
