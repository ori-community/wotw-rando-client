#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ErrorEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ErrorEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ErrorEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_ErrorEventArgs__Fields_DEFINED
struct Object;
struct ErrorContext;
struct __declspec(align(8)) ErrorEventArgs__Fields {
    struct Object* _CurrentObject_k__BackingField;
    struct ErrorContext* _ErrorContext_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_ErrorEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_ErrorEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/ErrorContext.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_ErrorEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ErrorEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ErrorEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/ErrorEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ErrorEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
