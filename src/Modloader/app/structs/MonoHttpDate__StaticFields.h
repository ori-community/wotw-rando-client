#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoHttpDate__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoHttpDate__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoHttpDate__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MonoHttpDate__StaticFields_DEFINED
struct String;
struct String__Array;
struct MonoHttpDate__StaticFields {
    struct String* rfc1123_date;
    struct String* rfc850_date;
    struct String* asctime_date;
    struct String__Array* formats;
};
#endif
#if !defined(IL2CPP_STRUCT_MonoHttpDate__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MonoHttpDate__StaticFields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_MonoHttpDate__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoHttpDate__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MonoHttpDate__StaticFields_FWDDECL)
#include <Modloader/app/structs/MonoHttpDate__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoHttpDate__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
