package wotw.server.exception

class AlreadyExistsException(message: String? = null) : Exception(message)
class UnauthorizedException : Exception()