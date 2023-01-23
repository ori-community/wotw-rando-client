#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RequestCallback__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RequestCallback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_RequestCallback__Fields_DEFINED
struct IRequest;
struct IDataWriter;
struct WebResponse_1;
struct __declspec(align(8)) RequestCallback__Fields {
    struct IRequest* m_request;
    struct IDataWriter* m_dataWriter;
    struct WebResponse_1* MResponse;
};
#endif
#if !defined(IL2CPP_STRUCT_RequestCallback__Fields_FWDDECL)
#define IL2CPP_STRUCT_RequestCallback__Fields_FWDDECL
#include <Modloader/app/structs/IDataWriter.h>
#include <Modloader/app/structs/IRequest.h>
#include <Modloader/app/structs/WebResponse_1.h>
#endif
#undef IL2CPP_STRUCT_RequestCallback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCallback__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RequestCallback__Fields_FWDDECL)
#include <Modloader/app/structs/RequestCallback__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RequestCallback__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
