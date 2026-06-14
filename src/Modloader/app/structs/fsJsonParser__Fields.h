#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsJsonParser__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsJsonParser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsJsonParser__Fields_DEFINED)
#define IL2CPP_STRUCT_fsJsonParser__Fields_DEFINED
struct String;
struct StringBuilder;
struct __declspec(align(8)) fsJsonParser__Fields {
    int32_t _start;
    struct String* _input;
    struct StringBuilder* _cachedStringBuilder;
};
#endif
#if !defined(IL2CPP_STRUCT_fsJsonParser__Fields_FWDDECL)
#define IL2CPP_STRUCT_fsJsonParser__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#endif
#undef IL2CPP_STRUCT_fsJsonParser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsJsonParser__Fields_DEFINED) && !defined(IL2CPP_STRUCT_fsJsonParser__Fields_FWDDECL)
#include <Modloader/app/structs/fsJsonParser__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsJsonParser__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
