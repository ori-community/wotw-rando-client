#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RelatedView__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RelatedView__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RelatedView__Fields_DEFINED)
#include <Modloader/app/structs/DataKey.h>
#include <Modloader/app/structs/DataView__Fields.h>
#include <Modloader/app/structs/Nullable_1_System_Data_DataKey_.h>
#if defined(IL2CPP_STRUCT_DataView__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_System_Data_DataKey__DEFINED) && defined(IL2CPP_STRUCT_DataKey_DEFINED)
#define IL2CPP_STRUCT_RelatedView__Fields_DEFINED
struct DataRowView;
struct Object__Array;
struct RelatedView__Fields {
    struct DataView__Fields _;
    struct Nullable_1_System_Data_DataKey_ _parentKey;
    struct DataKey _childKey;
    struct DataRowView* _parentRowView;
    struct Object__Array* _filterValues;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RelatedView__Fields_FWDDECL)
#define IL2CPP_STRUCT_RelatedView__Fields_FWDDECL
#include <Modloader/app/structs/DataRowView.h>
#include <Modloader/app/structs/Object__Array.h>
#endif
#undef IL2CPP_STRUCT_RelatedView__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RelatedView__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RelatedView__Fields_FWDDECL)
#include <Modloader/app/structs/RelatedView__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RelatedView__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
