#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_CatchBlock_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_ElementInit_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_MemberBinding_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_SwitchCase_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Reflection_MemberInfo_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParameterExpression.h>
#include <Modloader/app/structs/ParameterExpression__Array.h>
#include <Modloader/app/structs/ParameterInfo_1__Array.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_CatchBlock_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Object_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Reflection_MemberInfo_.h>
#include <Modloader/app/structs/TrueReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/TrueReadOnlyCollection_1_System_Object_.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Dynamic::Utils::CollectionExtensions {
    IL2CPP_REGISTER_METHOD(
        0x0153E7E0,
        app::TrueReadOnlyCollection_1_System_Object_*,
        AddFirst_1,
        app::ReadOnlyCollection_1_System_Object_* list,
        app::Object* item
    )
    IL2CPP_REGISTER_METHOD(0x01586DC0, app::Object__Array*, AddLast, app::Object__Array* array, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x01586E70, app::Object__Array*, RemoveFirst_1, app::Object__Array* array)
    IL2CPP_REGISTER_METHOD(0x01586F00, app::Object__Array*, RemoveLast_1, app::Object__Array* array)
    IL2CPP_REGISTER_METHOD(0x01EBB560, app::ReadOnlyCollection_1_System_Object_*, ToReadOnly_1, app::IEnumerable_1_System_Object_* enumerable)
    IL2CPP_REGISTER_METHOD(0x01586E70, app::ParameterInfo_1__Array*, RemoveFirst_2, app::ParameterInfo_1__Array* array)
    IL2CPP_REGISTER_METHOD(0x01586F00, app::Type__Array*, RemoveLast_2, app::Type__Array* array)
    IL2CPP_REGISTER_METHOD(
        0x01EBB560,
        app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_*,
        ToReadOnly_2,
        app::IEnumerable_1_System_Linq_Expressions_ParameterExpression_* enumerable
    )
    IL2CPP_REGISTER_METHOD(
        0x01EBB560,
        app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*,
        ToReadOnly_3,
        app::IEnumerable_1_System_Linq_Expressions_Expression_* enumerable
    )
    IL2CPP_REGISTER_METHOD(0x01586F00, app::ParameterInfo_1__Array*, RemoveLast_3, app::ParameterInfo_1__Array* array)
    IL2CPP_REGISTER_METHOD(
        0x01EBB560,
        app::ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_*,
        ToReadOnly_4,
        app::IEnumerable_1_System_Linq_Expressions_ElementInit_* enumerable
    )
    IL2CPP_REGISTER_METHOD(
        0x01EBB560,
        app::ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_*,
        ToReadOnly_5,
        app::IEnumerable_1_System_Linq_Expressions_MemberBinding_* enumerable
    )
    IL2CPP_REGISTER_METHOD(
        0x01EBB560,
        app::ReadOnlyCollection_1_System_Reflection_MemberInfo_*,
        ToReadOnly_6,
        app::IEnumerable_1_System_Reflection_MemberInfo_* enumerable
    )
    IL2CPP_REGISTER_METHOD(
        0x01EBB560,
        app::ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase_*,
        ToReadOnly_7,
        app::IEnumerable_1_System_Linq_Expressions_SwitchCase_* enumerable
    )
    IL2CPP_REGISTER_METHOD(
        0x01EBB560,
        app::ReadOnlyCollection_1_System_Linq_Expressions_CatchBlock_*,
        ToReadOnly_8,
        app::IEnumerable_1_System_Linq_Expressions_CatchBlock_* enumerable
    )
    IL2CPP_REGISTER_METHOD(
        0x0153E7E0,
        app::TrueReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_*,
        AddFirst_2,
        app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_* list,
        app::ParameterExpression* item
    )
    IL2CPP_REGISTER_METHOD(0x01586E70, app::ParameterExpression__Array*, RemoveFirst_3, app::ParameterExpression__Array* array)
} // namespace app::classes::System::Dynamic::Utils::CollectionExtensions
