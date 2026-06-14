#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UploadValuesCompletedEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UploadValuesCompletedEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadValuesCompletedEventArgs__Fields_DEFINED)
#include <Modloader/app/structs/AsyncCompletedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_AsyncCompletedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_UploadValuesCompletedEventArgs__Fields_DEFINED
struct Byte__Array;
struct UploadValuesCompletedEventArgs__Fields {
    struct AsyncCompletedEventArgs__Fields _;
    struct Byte__Array* m_Result;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UploadValuesCompletedEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_UploadValuesCompletedEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_UploadValuesCompletedEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadValuesCompletedEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UploadValuesCompletedEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/UploadValuesCompletedEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UploadValuesCompletedEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
