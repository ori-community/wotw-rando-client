#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XGameSaveBlob_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XGameSaveBlob_INITIALIZING
#if !defined(IL2CPP_STRUCT_XGameSaveBlob_DEFINED)
#include <Modloader/app/structs/XGameSaveBlob__Fields.h>
#if defined(IL2CPP_STRUCT_XGameSaveBlob__Fields_DEFINED)
#define IL2CPP_STRUCT_XGameSaveBlob_DEFINED
struct XGameSaveBlob__Class;
struct XGameSaveBlob {
    struct XGameSaveBlob__Class* klass;
    MonitorData* monitor;
    struct XGameSaveBlob__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XGameSaveBlob_FWDDECL)
#define IL2CPP_STRUCT_XGameSaveBlob_FWDDECL
#include <Modloader/app/structs/XGameSaveBlob__Class.h>
#endif
#undef IL2CPP_STRUCT_XGameSaveBlob_INITIALIZING
#if !defined(IL2CPP_STRUCT_XGameSaveBlob_DEFINED) && !defined(IL2CPP_STRUCT_XGameSaveBlob_FWDDECL)
#include <Modloader/app/structs/XGameSaveBlob.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XGameSaveBlob.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
