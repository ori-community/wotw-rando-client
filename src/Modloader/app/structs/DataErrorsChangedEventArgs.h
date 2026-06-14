#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataErrorsChangedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataErrorsChangedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataErrorsChangedEventArgs_DEFINED)
#include <Modloader/app/structs/DataErrorsChangedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_DataErrorsChangedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_DataErrorsChangedEventArgs_DEFINED
struct DataErrorsChangedEventArgs__Class;
struct DataErrorsChangedEventArgs {
    struct DataErrorsChangedEventArgs__Class* klass;
    MonitorData* monitor;
    struct DataErrorsChangedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataErrorsChangedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_DataErrorsChangedEventArgs_FWDDECL
#include <Modloader/app/structs/DataErrorsChangedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_DataErrorsChangedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataErrorsChangedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_DataErrorsChangedEventArgs_FWDDECL)
#include <Modloader/app/structs/DataErrorsChangedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataErrorsChangedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
