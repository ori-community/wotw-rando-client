#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MistyWoodsKuroGameplayHideZone__Array__Class.h>
#include <Modloader/app/structs/MistyWoodsKuroGameplayHideZone__Array.h>

namespace app::classes::types {
    namespace MistyWoodsKuroGameplayHideZone__Array {
        namespace {
            inline app::MistyWoodsKuroGameplayHideZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::MistyWoodsKuroGameplayHideZone__Array__Class** type_info = &type_info_ref;
        inline app::MistyWoodsKuroGameplayHideZone__Array__Class* get_class() {
            return il2cpp::get_class<app::MistyWoodsKuroGameplayHideZone__Array__Class>(type_info, "", "MistyWoodsKuroGameplayHideZone[]");
        }
        inline app::MistyWoodsKuroGameplayHideZone__Array* create() {
            return il2cpp::create_object<app::MistyWoodsKuroGameplayHideZone__Array>(get_class());
        }
    } // namespace MistyWoodsKuroGameplayHideZone__Array
} // namespace app::classes::types
