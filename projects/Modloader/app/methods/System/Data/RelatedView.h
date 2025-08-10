#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataColumn__Array.h>
#include <Modloader/app/structs/DataKey.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataRowVersion__Enum.h>
#include <Modloader/app/structs/DataRowView.h>
#include <Modloader/app/structs/DataViewRowState__Enum.h>
#include <Modloader/app/structs/IFilter.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/RelatedView.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::RelatedView {
    IL2CPP_REGISTER_METHOD(0x01E4AB30, void, ctor_1, app::RelatedView* this_ptr, app::DataColumn__Array* columns, app::Object__Array* values)
    IL2CPP_REGISTER_METHOD(
        0x01E4ACC0,
        void,
        ctor_2,
        app::RelatedView* this_ptr,
        app::DataRowView* parent_row_view,
        app::DataKey parent_key,
        app::DataColumn__Array* child_key_columns
    )
    IL2CPP_REGISTER_METHOD(0x01E4AE30, app::Object__Array*, GetParentValues, app::RelatedView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E4B030, bool, Invoke, app::RelatedView* this_ptr, app::DataRow* row, app::DataRowVersion__Enum version)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::IFilter*, GetFilter, app::RelatedView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E4B1D0, app::DataRowView*, AddNew, app::RelatedView* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01E4B250,
        void,
        SetIndex,
        app::RelatedView* this_ptr,
        app::String* new_sort,
        app::DataViewRowState__Enum new_row_states,
        app::IFilter* new_row_filter
    )
} // namespace app::classes::System::Data::RelatedView
