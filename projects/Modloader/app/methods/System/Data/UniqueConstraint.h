#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConstraintCollection.h>
#include <Modloader/app/structs/Constraint_1.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataColumn__Array.h>
#include <Modloader/app/structs/DataKey.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataRowAction__Enum.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/Index.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/UniqueConstraint.h>

namespace app::classes::System::Data::UniqueConstraint {
    IL2CPP_REGISTER_METHOD(0x022BFAB0, void, ctor_1, app::UniqueConstraint* this_ptr, app::String* name, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x022BFBC0, void, ctor_2, app::UniqueConstraint* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x022BFCD0, void, ctor_3, app::UniqueConstraint* this_ptr, app::String* name, app::DataColumn__Array* columns)
    IL2CPP_REGISTER_METHOD(0x022BFD10, void, ctor_4, app::UniqueConstraint* this_ptr, app::DataColumn__Array* columns)
    IL2CPP_REGISTER_METHOD(0x022BFD50, void, ctor_5, app::UniqueConstraint* this_ptr, app::String* name, app::String__Array* column_names, bool is_primary_key)
    IL2CPP_REGISTER_METHOD(0x022BFDA0, void, ctor_6, app::UniqueConstraint* this_ptr, app::String* name, app::DataColumn* column, bool is_primary_key)
    IL2CPP_REGISTER_METHOD(0x022BFED0, void, ctor_7, app::UniqueConstraint* this_ptr, app::DataColumn* column, bool is_primary_key)
    IL2CPP_REGISTER_METHOD(0x022BFFF0, void, ctor_8, app::UniqueConstraint* this_ptr, app::String* name, app::DataColumn__Array* columns, bool is_primary_key)
    IL2CPP_REGISTER_METHOD(0x022C0040, void, ctor_9, app::UniqueConstraint* this_ptr, app::DataColumn__Array* columns, bool is_primary_key)
    IL2CPP_REGISTER_METHOD(0x022C0090, app::String__Array*, get_ColumnNames, app::UniqueConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Index*, get_ConstraintIndex, app::UniqueConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022C00A0, void, ConstraintIndexClear, app::UniqueConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022C00D0, void, ConstraintIndexInitialize, app::UniqueConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022C0120, void, CheckState, app::UniqueConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022C0120, void, NonVirtualCheckState, app::UniqueConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CheckCanAddToCollection, app::UniqueConstraint* this_ptr, app::ConstraintCollection* constraints)
    IL2CPP_REGISTER_METHOD(
        0x022C0130,
        bool,
        CanBeRemovedFromCollection,
        app::UniqueConstraint* this_ptr,
        app::ConstraintCollection* constraints,
        bool f_throw_exception
    )
    IL2CPP_REGISTER_METHOD(0x022C03F0, bool, CanEnableConstraint, app::UniqueConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022C0460, bool, IsConstraintViolated, app::UniqueConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022C0760, void, CheckConstraint, app::UniqueConstraint* this_ptr, app::DataRow* row, app::DataRowAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x022C09D0, bool, ContainsColumn, app::UniqueConstraint* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x01F616E0, app::Constraint_1*, Clone_1, app::UniqueConstraint* this_ptr, app::DataSet* destination)
    IL2CPP_REGISTER_METHOD(0x022C0A30, app::Constraint_1*, Clone_2, app::UniqueConstraint* this_ptr, app::DataSet* destination, bool ignor_n_sfor_table_lookup)
    IL2CPP_REGISTER_METHOD(0x022C1080, app::UniqueConstraint*, Clone_3, app::UniqueConstraint* this_ptr, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(0x022C1550, app::DataColumn__Array*, get_Columns, app::UniqueConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::DataColumn__Array*, get_ColumnsReference, app::UniqueConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022C1560, bool, get_IsPrimaryKey, app::UniqueConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022C15C0, void, Create, app::UniqueConstraint* this_ptr, app::String* constraint_name, app::DataColumn__Array* columns)
    IL2CPP_REGISTER_METHOD(0x022C1710, bool, Equals, app::UniqueConstraint* this_ptr, app::Object* key2)
    IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, app::UniqueConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022C1880, void, set_InCollection, app::UniqueConstraint* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::DataKey, get_Key, app::UniqueConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022C1900, app::DataTable*, get_Table, app::UniqueConstraint* this_ptr)
} // namespace app::classes::System::Data::UniqueConstraint
