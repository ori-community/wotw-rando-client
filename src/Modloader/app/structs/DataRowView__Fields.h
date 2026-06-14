#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRowView__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRowView__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowView__Fields_DEFINED)
#define IL2CPP_STRUCT_DataRowView__Fields_DEFINED
struct DataView;
struct DataRow;
struct PropertyChangedEventHandler;
struct __declspec(align(8)) DataRowView__Fields {
    struct DataView* _dataView;
    struct DataRow* _row;
    bool _delayBeginEdit;
    struct PropertyChangedEventHandler* PropertyChanged;
};
#endif
#if !defined(IL2CPP_STRUCT_DataRowView__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataRowView__Fields_FWDDECL
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataView.h>
#include <Modloader/app/structs/PropertyChangedEventHandler.h>
#endif
#undef IL2CPP_STRUCT_DataRowView__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowView__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataRowView__Fields_FWDDECL)
#include <Modloader/app/structs/DataRowView__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRowView__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
